//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PDAnimationInfoData, PDMediaNode;

__attribute__((visibility("hidden")))
@interface PDAnimationInfo : NSObject
{
    PDAnimationInfoData *mEntrance;
    PDAnimationInfoData *mExit;
    PDAnimationInfoData *mMedia;
    PDMediaNode *mediaNode;
}

@property(retain, nonatomic) PDMediaNode *mediaNode; // @synthesize mediaNode;
@property(retain, nonatomic) PDAnimationInfoData *mediaData; // @synthesize mediaData=mMedia;
- (id)description;
- (id)exitData;
- (void)setExitData:(id)arg1;
- (id)entranceData;
- (void)setEntranceData:(id)arg1;

@end

