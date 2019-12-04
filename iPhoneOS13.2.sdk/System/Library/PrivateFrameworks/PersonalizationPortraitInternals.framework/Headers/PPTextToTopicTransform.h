//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _PASLock, _PASNotificationToken;

@interface PPTextToTopicTransform : NSObject
{
    _PASLock *_lock;
    NSString *_vocabularyPath;
    NSString *_weightsPath;
    _PASNotificationToken *_assetUpdateNotificationToken;
}

+ (id)sharedInstance;
- (id)_payloadForTopic:(unsigned int)arg1;
- (void)iterateTopicsForText:(id)arg1 threshold:(double)arg2 scoreAttenuationFactor:(double)arg3 block:(id /* block */)arg4;
@property(readonly, nonatomic) unsigned long long outputTopicCount;
- (void)dealloc;
- (id)init;
- (void)_updateFromAssetData;
- (id)_initWithVocabulary:(id)arg1 weights:(id)arg2;
- (id)_init;

@end

