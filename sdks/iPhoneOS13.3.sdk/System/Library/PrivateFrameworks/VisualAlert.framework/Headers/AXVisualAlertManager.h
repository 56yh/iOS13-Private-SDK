//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXVisualAlertManager : NSObject
{
    int ringerStateNotifyToken;
}

+ (id)sharedVisualAlertManager;
@property(nonatomic) int ringerStateNotifyToken; // @synthesize ringerStateNotifyToken;
- (void)removeBulletin:(id)arg1;
- (id)existingBulletinForBulletin:(id)arg1;
- (void)addBulletin:(id)arg1;
- (void)stop;
- (void)startForAlertTypes:(NSUInteger)arg1 cameraTorchManager:(id)arg2;

@end
