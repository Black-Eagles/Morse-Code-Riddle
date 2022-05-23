board = arduino:avr:uno
port = COM6

verify:
	arduino --board $(board) --verify main.ino

upload:
	arduino --board $(board) --port $(port) --upload main.ino

compile:
	arduino-cli compile --fqbn $(board) main.ino

upload-cli:
	arduino-cli upload --fqbn $(board) --port $(port) main.ino