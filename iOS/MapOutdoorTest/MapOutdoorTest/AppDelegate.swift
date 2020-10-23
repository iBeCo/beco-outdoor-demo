//
//  AppDelegate.swift
//  MapOutdoorTest
//
//  Created by SayOne Technologies on 17/10/20.
//

import UIKit
import beCoMapOutdoor

@main
class AppDelegate: UIResponder, UIApplicationDelegate {
    
    var window: UIWindow?

    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        BeCoServices.sharedInstance().configureWith(usageToken: "ce366d96bc01ef1a6e9ba2da04e5ec3772826afc")
        BeCoServices.sharedInstance().provideAPIKey("AIzaSyCNLwu4eStBI-VeTFeNV7Gow35dMsr82ak")
        return true
    }

}

