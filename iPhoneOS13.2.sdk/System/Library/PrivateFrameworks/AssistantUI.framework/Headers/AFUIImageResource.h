//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSString, NSURL, SAUIAppPunchOut;

@interface AFUIImageResource : NSObject
{
    NSString *_localResourceName;
    NSString *_localPressedResourceName;
    SAUIAppPunchOut *_localPunchOut;
    NSBundle *_localResourceBundle;
    NSURL *_remoteURL;
    NSURL *_remotePressedURL;
    SAUIAppPunchOut *_remotePunchOut;
    double _remoteScale;
    double _remotePressedScale;
    struct CGSize _logoSize;
}

+ (id)imageResourceFromKey:(id)arg1 pressedKey:(id)arg2 punchOut:(id)arg3;
+ (id)imageResourceWithLocalResourceName:(id)arg1 pressedResourceName:(id)arg2 localPunchOut:(id)arg3 bundle:(id)arg4;
+ (id)imageResourceWithAppPunchOut:(id)arg1;
@property(nonatomic) struct CGSize logoSize; // @synthesize logoSize=_logoSize;
@property(nonatomic) double remotePressedScale; // @synthesize remotePressedScale=_remotePressedScale;
@property(nonatomic) double remoteScale; // @synthesize remoteScale=_remoteScale;
@property(retain, nonatomic) SAUIAppPunchOut *remotePunchOut; // @synthesize remotePunchOut=_remotePunchOut;
@property(copy, nonatomic) NSURL *remotePressedURL; // @synthesize remotePressedURL=_remotePressedURL;
@property(copy, nonatomic) NSURL *remoteURL; // @synthesize remoteURL=_remoteURL;
@property(retain, nonatomic) NSBundle *localResourceBundle; // @synthesize localResourceBundle=_localResourceBundle;
@property(retain, nonatomic) SAUIAppPunchOut *localPunchOut; // @synthesize localPunchOut=_localPunchOut;
@property(copy, nonatomic) NSString *localPressedResourceName; // @synthesize localPressedResourceName=_localPressedResourceName;
@property(copy, nonatomic) NSString *localResourceName; // @synthesize localResourceName=_localResourceName;
- (void)_fetchRemoteResourcesWithCompletion:(id /* block */)arg1;
- (id)_imageInLocalResourceBundleNamed:(id)arg1;
- (void)_fetchLocalResourcesWithCompletion:(id /* block */)arg1;
- (void)getLogoWithCompletion:(id /* block */)arg1;

@end

