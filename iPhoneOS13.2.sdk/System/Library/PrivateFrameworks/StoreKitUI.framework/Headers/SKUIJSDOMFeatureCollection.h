//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <StoreKitUI/SKUIJSDOMFeatureCollection-Protocol.h>

@protocol SKUIJSDOMFeatureCollectionAppBridge;

__attribute__((visibility("hidden")))
@interface SKUIJSDOMFeatureCollection : IKJSObject <SKUIJSDOMFeatureCollection>
{
    id <SKUIJSDOMFeatureCollectionAppBridge> _appBridge;
}

@property(nonatomic) __weak id <SKUIJSDOMFeatureCollectionAppBridge> appBridge; // @synthesize appBridge=_appBridge;
- (void)setEditing:(_Bool)arg1:(id)arg2;

@end

