# Beco Outdoor SDK Demo 


Steps to use the outdoor SDK


### Adding Dependency

In Project build.gradle add

```
allprojects{
	repositories{
		maven { url "https://raw.githubusercontent.com/iBeCo/beco-outdoor-sdk-android/beta" }
	}
}
```

Then in App build.gradle add

```
dependencies{
	implementation 'com.beco.outdoor:sdk:1.0'
}
```

Sync gradle.

### Adding Environment Json Parsing plugin. 

This is required so as to parse the beco-services.json(containing api key and environment id.(json currently available in the demo)

In Project build.gradle add

```
buildscript {
    repositories {
        maven{
            url uri('https://raw.githubusercontent.com/iBeCo/beco-gradle-plugin/master/repo')
        }
    }
	dependencies {
        classpath "org.beco:config:1.0"
    }
}
```
Finally apply plugin in App build.gradle at the bottom of the file

```
apply plugin: 'org.beco.config'
```

### Add Activities to Manifest

```
<activity android:name="com.beco.outdoor.sdk.map.BEMapActivity"
            android:screenOrientation="portrait"
            />
        <activity android:name="com.beco.outdoor.sdk.map.search.BESearchActivity"
            android:screenOrientation="portrait"
            />
```

### Implemention

Call the BEMapActivity as you would any other activity from your class.