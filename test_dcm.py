import subprocess
import pytest
@pytest.mark.parametrize("cpu,ram,expected,attention",[
	(20,30,"Healthy",0),
	(60,60,"Healthy",0),
	(61,70,"Moderate",0),
	(80,80,"Moderate",0),
	(81,90,"High",1),
	(-1,101,"Invalid",1),
	(-1,50,"Invalid",1)
])
def test_dcm_summary(cpu,ram,expected,attention):
	result = subprocess.run(
	["./DCM"],
	input = f"1\nweb\n{cpu}\n{ram}",
	capture_output =True,
	text = True
	)
	print(result.stdout)
	assert result.returncode == 0
	assert "Total Servers: 1" in result.stdout
	assert f"{expected}: 1" in result.stdout
	assert f"Server requiring attention: {attention}" in result.stdout
