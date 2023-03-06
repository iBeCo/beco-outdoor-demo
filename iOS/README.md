---
title: beCo Outdoor iOS SDK Quick Start Guide
---

The following information will help you to integrate the beCoMap SDK with your app using Xcode, Objective-C, and Swift.

### Get Started
beCo map outdoor SDK for iOS will help you setup a map based navigation system for your users on their apple devices. Using the SDK you can provide an interactive and engaging experience to your users with the least effort.

### Requirements
 * iOS 13.0 and above
 

### Get the latest version of Xcode 
To integrate beCoMapOutdoor iOS SDK, install Xcode's latest version [Xcode](https://developer.apple.com/xcode/)


### Install the SDK with CocoaPods
**Note:** If you are using the enterprise version of the SDK please refer the on boarding documentation provided for installing the SDK.

The beCoMap SDK for iOS is available as a CocoaPods pod. 
If you don't already have the CocoaPods tool, install it on macOS by running the following command from the terminal. For details, see the [CocoaPods Getting Started guide.](https://guides.cocoapods.org/using/getting-started.html)

Edit the Podfile and add your dependencies.
```
target 'YOUR_APPLICATION_TARGET_NAME_HERE' do
  pod 'beCoMap', '~> YOUR_SDK_VERSION(eg:1.6)'
end
```
Run the pod install command. This will install the APIs specified in the Podfile, along with any dependencies they may have.
Close Xcode, and then open (double-click) your project's .xcworkspace file to launch Xcode. From this time onwards, you must use the .xcworkspace file to open the project.

### Get a Server API Key
The server API key is generarted for an organizations. The app will require keys that are pre-registered with the server that will be authenticated to get the access to the sites registered under the organization. 
You can collect your Server API Key from the [beCo Dashboard](https://village-staging.becomap.com).

### Get a Google API Key
Generate your google maps API key from [Google console](https://console.cloud.google.com/google/maps-apis).

### Giving permissions
Add the following to your info.plist

```
<key>NSLocationAlwaysAndWhenInUseUsageDescription</key>
<string>Application requirs location aceess permision to track your location.</string>
<key>NSLocationWhenInUseUsageDescription</key>
<string>Application requirs location aceess permision to track your location.</string>
```

### Import Header File
Import the beCoMapOutdoor SDK header file into your app's delegate file and in any other place that you plan to use it:

 ```
 import beCoMapOutdoor

 ```
 
 ### Initialize the SDK

Initialize BeCoServices with usage token and google API key.

```
let beCoServices = BeCoServices.sharedInstance()
beCoServices.configureWith(usageToken: "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX")
beCoServices.provideAPIKey("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX")

```

 ### Setup your map view

```
let beCoMap = BEMapView.init(frame: .zero)
beCoMap.mapDelegate = self
beCoMap.loadSite("wtc2", name: "Global Village Dubai")
view = beCoMap

```

 ### Select point from app
 After loading the map, you can programatically select a point using the point name.
 ```
 beCoMap!.selectPointWithName("Point Name")
 ```


 ### Draw route from app
 After loading the map you can supply list of node names's to the sdk and, can programatically draw route.
 You must supply 2-5 valid point names's as a list.
 ```
 let points: [String] = ["IBM","Waiting Area","Lulu Cyber Tower 1"]
 beCoMap.drawRouteWithName(points, startForUserlocation: true)
 ```


 ### Draw route from app by suppliying a location
 After loading the map you can supply list of node names's to the sdk and, can programatically draw route.
 You must supply 2-5 valid point names's as a list.
 ```
 let parkingloc = CLLocationCoordinate2D.init(latitude: 25.07157095919638, longitude: 55.31000836488759)
 beCoMap.drawRouteToLocation(parkingloc, with: "Parking")
 ```

 #### How to know map is loaded?
 You will get a success call back on following delegate method.
 ```
 func becoView(_ mapView: BEMapView, didLoadWith site: BESite)
 ```

 ### Test your app

The beCoMap SDK should now be fully integrated in your app. Run the app and use the map. You’re done!

