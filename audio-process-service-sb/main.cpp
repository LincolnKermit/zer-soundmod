#include <iostream>
#include <portaudio.h>
using namespace std;
string hotkey;
PaDeviceIndex device_id;



int config() {
    PaError err = Pa_Initialize();
    if (err != paNoError) {
        std::cerr << "PortAudio error: " << Pa_GetErrorText(err) << std::endl;
        return -1;
    }


    int deviceCount = Pa_GetDeviceCount();
    if (deviceCount < 0) {
        std::cout << "No devices found!, Error Log below: " << endl;
        std::cerr << "PortAudio error: " << Pa_GetErrorText(deviceCount) << std::endl;
        Pa_Terminate();
        return -1;
    }

    std::cout << "Number of audio devices: " << deviceCount << std::endl;

    for (int i = 0; i < deviceCount; i++) {
        const PaDeviceInfo* info = Pa_GetDeviceInfo(i);
        std::cout << "Device " << i << ": " << info->name << std::endl;
    }
    cout << "select a device : ";
    cin >> device_id;
    const PaDeviceInfo* info = Pa_GetDeviceInfo(device_id);
    std::cout << "selected device -> " << ": " << info->name << std::endl;
    cout << "select a hotkey : ";
    cin >> hotkey;
    cout << "Hotkey : " << hotkey << endl;

    Pa_Terminate();
    return 0;
}



int main() {
    config();
}

