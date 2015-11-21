var hmd = require('node-hmd');

var supportedDevices = hmd.getSupportedDevices();

console.log(supportedDevices);

var manager = hmd.createManager("oculusrift");
 
manager.getDeviceInfo(function(err, deviceInfo) {
    if(!err) {
        console.log(deviceInfo);
    }
    else {
        console.error("Unable to retrieve device information.");
    }
});
 
manager.getDeviceOrientation(function(err, deviceOrientation) {
    if(!err) {
        console.log(deviceOrientation);
    }
    else {
        console.error("Unable to retrieve device orientation.");
    }
});

manager.getDevicePosition(function(err, devicePosition) {
    devicePosition; // -> [object HMDDevicePosition]
    console.log(devicePosition)
});