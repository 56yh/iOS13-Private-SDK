//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSString, PDIterate;

__attribute__((visibility("hidden")))
@interface PDTimeNode : NSObject
{
    NSMutableArray *mStartTimeConditions;
    NSMutableArray *mEndTimeConditions;
    NSMutableArray *mChildTimeNodeList;
    NSMutableArray *mSubTimeNodeList;
    PDIterate *mIterate;
    int mType;
    int mAnimationPresetClass;
    _Bool mHasPresetId;
    int mPresetId;
    _Bool mHasPresetSubType;
    int mPresetSubType;
    _Bool mHasRepeatCount;
    int mRepeatCount;
    _Bool mHasRepeatDuration;
    int mRepeatDuration;
    int mRestartType;
    _Bool mHasDuration;
    double mDuration;
    _Bool mHasSpeed;
    double mSpeed;
    _Bool mHasAcceleration;
    double mAcceleration;
    _Bool mHasDeceleration;
    double mDeceleration;
    _Bool mHasDisplay;
    _Bool mDisplay;
    _Bool mHasFillType;
    int mFillType;
    NSString *mGroupId;
    NSDictionary *attributeMap;
}

@property(retain, nonatomic) NSDictionary *attributeMap; // @synthesize attributeMap;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)setDisplay:(_Bool)arg1;
- (_Bool)display;
- (_Bool)hasDisplay;
- (void)setGroupIdValue:(int)arg1;
- (void)setGroupId:(id)arg1;
- (id)groupId;
- (void)setFillType:(int)arg1;
- (int)fillType;
- (_Bool)hasFillType;
- (void)setDeceleration:(double)arg1;
- (double)deceleration;
- (_Bool)hasDeceleration;
- (void)setAcceleration:(double)arg1;
- (double)acceleration;
- (_Bool)hasAcceleration;
- (void)setSpeed:(double)arg1;
- (double)speed;
- (_Bool)hasSpeed;
- (void)setDuration:(double)arg1;
- (double)duration;
- (_Bool)hasDuration;
- (void)setRestartType:(int)arg1;
- (int)restartType;
- (_Bool)hasRestartType;
- (void)setRepeatDuration:(int)arg1;
- (int)repeatDuration;
- (_Bool)hasRepeatDuration;
- (void)setRepeatCount:(int)arg1;
- (int)repeatCount;
- (_Bool)hasRepeatCount;
- (void)setPresetId:(int)arg1;
- (int)presetId;
- (_Bool)hasPresetId;
- (void)setPresetSubType:(int)arg1;
- (int)presetSubType;
- (_Bool)hasPresetSubType;
- (void)setAnimationPresetClass:(int)arg1;
- (int)animationPresetClass;
- (_Bool)hasPresetClass;
- (void)setType:(int)arg1;
- (int)type;
- (_Bool)hasType;
- (void)setIterate:(id)arg1;
- (id)iterate;
- (void)setSubTimeNodeList:(id)arg1;
- (id)subTimeNodeList;
- (void)setChildTimeNodeList:(id)arg1;
- (id)childTimeNodeList;
- (void)setEndTimeConditions:(id)arg1;
- (id)endTimeConditions;
- (void)setStartTimeConditions:(id)arg1;
- (id)startTimeConditions;
- (id)init;
- (long long)writeRepeatCount;
- (long long)writeDuration;

@end

