import subprocess
def test_docker_monitor():
	server_input = "2\nCustomer\n43\n45\nDatabase\n89\n77"
	result = subprocess.run(
		["docker","run","--rm","-i","incident-monitor"],
		input = server_input,
		capture_output = True,
		text = True
	)
	assert result.returncode == 0
	assert "Healthy: 1" in result.stdout
	assert "High: 1" in result.stdout


def test_docker_server():
	server_input_check = "1\nWebServer\n77\n65"
	result2 = subprocess.run(
		["docker","run","--rm","-i","incident-monitor"],
		input = server_input_check,
		capture_output = True,
		text = True
	)
	print(result2.stdout)
	assert result2.returncode == 0
	assert "Moderate: 1" in result2.stdout

def test_docker_invalid():
	invalid_input = "1\nWebServer\n120\n45"
	invalid = subprocess.run(
		["docker","run","--rm","-i","incident-monitor"],
		input = invalid_input,
		capture_output = True,
		text = True
	)
	assert invalid.returncode == 0
	assert "Invalid: 1" in invalid.stdout
