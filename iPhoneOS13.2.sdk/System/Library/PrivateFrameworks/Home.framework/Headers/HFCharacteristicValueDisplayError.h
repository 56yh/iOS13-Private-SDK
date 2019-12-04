//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HMSymptom, NSError;
@protocol HFCharacteristicOperationContextProviding;

@interface HFCharacteristicValueDisplayError : NSObject
{
    unsigned long long _category;
    id <HFCharacteristicOperationContextProviding> _contextProvider;
    NSError *_underlyingError;
    HMSymptom *_underlyingSymptom;
}

+ (id)mostEgregiousError:(id)arg1;
+ (id)errorWithUnderlyingSymptom:(id)arg1 isFixingCurrently:(_Bool)arg2 contextProvider:(id)arg3;
+ (id)errorWithUnderlyingError:(id)arg1 readTraits:(id)arg2 contextProvider:(id)arg3;
@property(retain, nonatomic) HMSymptom *underlyingSymptom; // @synthesize underlyingSymptom=_underlyingSymptom;
@property(copy, nonatomic) NSError *underlyingError; // @synthesize underlyingError=_underlyingError;
@property(retain, nonatomic) id <HFCharacteristicOperationContextProviding> contextProvider; // @synthesize contextProvider=_contextProvider;
@property(nonatomic) unsigned long long category; // @synthesize category=_category;
@property(readonly, nonatomic, getter=isPersistentError) _Bool persistentError;

@end

