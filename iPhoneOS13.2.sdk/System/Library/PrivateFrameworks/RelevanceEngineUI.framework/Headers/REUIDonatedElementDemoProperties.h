//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngineUI/REUIDonatedElementProperties.h>

@class INIntent, NSString, UIImage;

@interface REUIDonatedElementDemoProperties : REUIDonatedElementProperties
{
    NSString *_demoBundleIdentifier;
    INIntent *_demoIntent;
    NSString *_demoAppName;
    UIImage *_demoAppIcon;
}

+ (id)createWithIntent:(id)arg1 bundleIdentifier:(id)arg2 appName:(id)arg3 appIcon:(id)arg4;
- (id)appIcon;
- (id)appName;
- (id)bundleIdentifier;
- (id)intent;

@end

