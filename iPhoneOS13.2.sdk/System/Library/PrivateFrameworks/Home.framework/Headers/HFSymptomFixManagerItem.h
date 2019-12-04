//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HMAccessory, HMSymptom, HMSymptomFixSession;

@interface HFSymptomFixManagerItem : NSObject
{
    HMSymptom *_symptom;
    HMSymptomFixSession *_fixSession;
    HMAccessory *_accessory;
}

@property(readonly, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) HMSymptomFixSession *fixSession; // @synthesize fixSession=_fixSession;
@property(readonly, nonatomic) HMSymptom *symptom; // @synthesize symptom=_symptom;
- (id)description;
- (id)initWithSymptom:(id)arg1 fixSession:(id)arg2 accessory:(id)arg3;

@end

