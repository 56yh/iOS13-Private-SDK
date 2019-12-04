//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItem.h>

#import <HomeUI/HFHomeKitItemProtocol-Protocol.h>

@class HMSoftwareUpdate, NSString;
@protocol HFHomeKitObject;

@interface HUSoftwareUpdateInfoItem : HFItem <HFHomeKitItemProtocol>
{
    HMSoftwareUpdate *_softwareUpdate;
    NSString *_publisher;
}

@property(readonly, nonatomic) NSString *publisher; // @synthesize publisher=_publisher;
@property(readonly, nonatomic) HMSoftwareUpdate *softwareUpdate; // @synthesize softwareUpdate=_softwareUpdate;
- (id)_subclass_updateWithOptions:(id)arg1;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
- (id)initWithSoftwareUpdate:(id)arg1 publisher:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

