```
arduino-cli compile --fqbn arduino:avr:uno <project-name>
```

```
arduino-cli upload -p /dev/ttyACM0 --fqbn arduino:avr:uno <project-name>
```

```
sudo chmod a+rw /dev/ttyACM0
```