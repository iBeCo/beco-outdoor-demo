// Generated by Apple Swift version 5.3 (swiftlang-1200.0.29.2 clang-1200.0.30.1)
#ifndef BECOMAPOUTDOOR_SWIFT_H
#define BECOMAPOUTDOOR_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="beCoMapOutdoor",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

/// BEView
/// <ul>
///   <li>
///     BEAuthenticationStatus
///   </li>
/// </ul>
/// version:
/// 1.0
/// copyright:
/// Copyright © 2019 GlobeCo Technologies Pvt Ltd. All rights reserved.
typedef SWIFT_ENUM(NSInteger, BEAuthorizationStatus, closed) {
  BEAuthorizationStatusBEUnknown = 0,
  BEAuthorizationStatusBEUnauthorized = 1,
  BEAuthorizationStatusBEAuthorized = 2,
  BEAuthorizationStatusBEAuthorizing = 3,
};


/// BECategory represents the category to which a specific point of interest is attributed to. The point of interest on the map is required to belong to the category in order to display map icons and have category-specific features.
/// version:
/// 1.0
/// copyright:
/// Copyright © 2019 GlobeCo Technologies Pvt Ltd. All rights reserved.
SWIFT_CLASS("_TtC14beCoMapOutdoor10BECategory")
@interface BECategory : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
@property (nonatomic, readonly, copy) NSString * _Nonnull color;
@property (nonatomic, readonly, copy) NSString * _Nonnull imageName;
@property (nonatomic, readonly, copy) NSString * _Nonnull textColourSelected;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// BELocation represents an actual cordinate point. Used to represent the lication for a site.
/// version:
/// 1.0
/// copyright:
/// Copyright © 2019 GlobeCo Technologies Pvt Ltd. All rights reserved.
SWIFT_CLASS("_TtC14beCoMapOutdoor10BELocation")
@interface BELocation : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSCoder;

/// You use this class as-is to display map information from your application. When you initialize a map view, you specify the BESite for that map to display by calling the setSite() function. The SDK makes the initial BEFloor and floor region visible based on the user’s current location or default map settings. In addition to this, BEView supports many standard user interactions for changing the position and zoom level of the map. In particular, map views support swipe and pinch gestures for scrolling around the map and zooming in and out. BEView also provides a floor switch button that enables the functionality to switch between floors.
/// version:
/// 1.0
/// copyright:
/// Copyright © 2019 GlobeCo Technologies Pvt Ltd. All rights reserved.
/// author:
/// Mithin Thomas
SWIFT_CLASS("_TtC14beCoMapOutdoor6BEView")
@interface BEView : UIView
/// func voiceAssistanceEnabled:
/// <ul>
///   <li>
///     Setting the value of this property to true will enable voice assistance and setting it to false will disable voice assistance. The default value is true.
///   </li>
/// </ul>
@property (nonatomic) BOOL voiceAssistanceEnabled;
/// You can create your map views programmatically. When creating a view, you typically specify its initial size and position relative to its future superview. To add BEView as a subview to another view, call the addSubview(_:) method on the superview.
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init;
@end

@protocol BEMapViewDelegate;

SWIFT_CLASS("_TtC14beCoMapOutdoor9BEMapView")
@interface BEMapView : BEView
@property (nonatomic, weak) id <BEMapViewDelegate> _Nullable mapDelegate;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init;
/// func loadSite
/// <ul>
///   <li>
///     load mapsite based on the identifier  and name
///   </li>
/// </ul>
/// <ul>
///   <li>
///     name: String  reference
///   </li>
/// </ul>
/// \param siteIdentifier String reference
///
- (void)loadSite:(NSString * _Nonnull)siteIdentifier name:(NSString * _Nonnull)name;
/// func drawRouteWith
/// <ul>
///   <li>
///     show route and assistview based on this int32 ids
///   </li>
/// </ul>
/// \param pointIds [Int32] reference
///
- (void)drawRouteWith:(NSArray<NSNumber *> * _Nonnull)pointIds;
/// func resetMap
/// <ul>
///   <li>
///     reset entire map. clear route, clear arrow, clear dotedlines
///   </li>
/// </ul>
- (void)resetMap;
@end



@class BEPoint;

SWIFT_PROTOCOL("_TtP14beCoMapOutdoor17BEMapViewDelegate_")
@protocol BEMapViewDelegate <NSObject>
/// becoMapView:didFailedWith:
/// <ul>
///   <li>
///     BEMapViewDelegate non-optional method.
///   </li>
///   <li>
///     Invoked when an error occure while loading your BEView.
///   </li>
/// </ul>
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     mapView: BEMapView reference
///   </li>
///   <li>
///     error:  Error details
///   </li>
/// </ul>
- (void)becoMapView:(BEMapView * _Nonnull)mapView didFailedWith:(NSError * _Nonnull)error;
@optional
/// becoMapView:userDidReached:
/// <ul>
///   <li>
///     Trigger when user reached the waypoint
///   </li>
/// </ul>
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     mapView: BEMapView reference
///   </li>
///   <li>
///     point:  BEPoint reference
///   </li>
/// </ul>
- (void)becoMapView:(BEMapView * _Nonnull)mapView userDidReached:(BEPoint * _Nonnull)point;
/// becoMapView:didBeaconDetect:
/// <ul>
///   <li>
///     Trigger when user’ get becon
///   </li>
/// </ul>
/// \param mapView BEMapView reference
///
/// \param uuid String reference.
///
/// \param major Int32 reference.
///
/// \param minor Int32 reference.
///
- (void)becoMapView:(BEMapView * _Nonnull)mapView didBeaconDetect:(NSString * _Nonnull)uuid major:(int32_t)major minor:(int32_t)minor;
@end


/// A BEPoint object defines any point of interest that needs to be displayed on a BEView. A point of interest can be anything from a general point, room, store, etc.  You can categorize a BEPoint using BECategory.
/// version:
/// 1.0
/// copyright:
/// Copyright © 2019 GlobeCo Technologies Pvt Ltd. All rights reserved.
SWIFT_CLASS("_TtC14beCoMapOutdoor7BEPoint")
@interface BEPoint : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
@property (nonatomic, readonly, strong) BECategory * _Nonnull category;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// This is an abstract class which defines the base session methods. You can access your BESDKSession from BeCo class. BESDKSession has autherisationStatus which checks that your Server API Key is authorized or not.
/// version:
/// 1.0
/// copyright:
/// Copyright © 2019 GlobeCo Technologies Pvt Ltd. All rights reserved.
SWIFT_CLASS("_TtC14beCoMapOutdoor9BESession")
@interface BESession : NSObject
@property (nonatomic) enum BEAuthorizationStatus autherisationStatus;
@property (nonatomic, copy) NSString * _Nonnull usageToken;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// The BESite object defines a site object that needs to be displayed and navigated on. The BESite should be added and approved previously on the beCo Dashboard. Once you have access to the organization’s Server API Key, you can collect all sites listed using beCoMap SDK.
/// version:
/// 1.0
/// copyright:
/// Copyright © 2019 GlobeCo Technologies Pvt Ltd. All rights reserved.
SWIFT_CLASS("_TtC14beCoMapOutdoor6BESite")
@interface BESite : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
@property (nonatomic, readonly, copy) NSString * _Nonnull identifier;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end







/// BeCo is a singleton class which interacts as the base interface. You can fetch your BeCo instance using function sharedInstance().
/// version:
/// 1.0
/// copyright:
/// Copyright © 2019 GlobeCo Technologies Pvt Ltd. All rights reserved.
SWIFT_CLASS("_TtC14beCoMapOutdoor12BeCoServices")
@interface BeCoServices : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// func sharedInstance:
///
/// returns:
/// BeCo signleton object
+ (BeCoServices * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
/// func configure:
/// <ul>
///   <li>
///     Framework initialization and configuring
///   </li>
///   <li>
///     Configure a BeCoApp shared instance, typically in your app’s application:didFinishLaunchingWithOptions: method. This will validate the token.
///   </li>
/// </ul>
/// \param usageToken Your beCo map server access token
///
- (void)configureWithUsageToken:(NSString * _Nonnull)usageToken;
/// Provides your API key to the Google Maps SDK for iOS.  This key is generated for your application
/// via the Google APIs Console, and is paired with your application’s bundle ID to identify it.
/// This must be called exactly once by your application before any iOS Maps SDK object is
/// initialized.
/// - Parameter APIKey: Your google map API key
- (void)provideAPIKey:(NSString * _Nonnull)APIKey;
@end









#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
