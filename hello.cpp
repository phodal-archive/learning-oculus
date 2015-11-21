#include <iostream>
#include <OVR_CAPI_0_5_0.h>
 
using namespace std;
 
int main()
{  if (ovr_Initialize(NULL))
   {  ovrHmd hmd = ovrHmd_Create(0);
 
      if (hmd)
      {  // Output some attributes of the HMD.
         cout << "Connected to HMD with name " << hmd->ProductName
              << " and firmware version " << hmd->FirmwareMajor << "."
              << hmd->FirmwareMinor << endl;
 
         ovrHmd_Destroy(hmd);
      }
 
      ovr_Shutdown();
   }
 
   return 0;
}