//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCharacterSet, NSMutableDictionary, NSSet, NSString, TILanguageModelOfflineLearningHandle;
@protocol TILinguisticDataSource;

@interface TILanguageModelOfflineLearningTask : NSObject
{
    TILanguageModelOfflineLearningHandle *_handleForLanguageLikelihood;
    _Bool _cancelled;
    _Bool _oneTimeTask;
    NSString *_clientIdentifier;
    NSMutableDictionary *_handles;
}

+ (id)taskWithClientIdentifier:(id)arg1 oneTimeTask:(_Bool)arg2;
+ (id)dataSourceForTask;
@property(readonly, nonatomic) NSMutableDictionary *handles; // @synthesize handles=_handles;
@property(readonly, nonatomic) _Bool oneTimeTask; // @synthesize oneTimeTask=_oneTimeTask;
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(readonly, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (void)didFinishLearning;
- (_Bool)incrementUsageCountsForMessages:(id)arg1 forLanguage:(id)arg2 adaptationContext:(id)arg3;
- (void)enumerateHandlesForLanguage:(id)arg1 withBlock:(id /* block */)arg2;
- (_Bool)incrementUsageCountsForMessages:(id)arg1 withHandle:(id)arg2;
- (void)setAdaptationContext:(id)arg1 onHandle:(id)arg2;
- (id)handleForLanguage:(id)arg1;
@property(readonly, nonatomic) TILanguageModelOfflineLearningHandle *handleForLanguageLikelihood;
@property(readonly, nonatomic) NSSet *forwardedMessageSeparators;
@property(readonly, nonatomic) NSCharacterSet *linePaddingCharacters;
@property(readonly, nonatomic) id <TILinguisticDataSource> dataSource;
- (id)initWithClientIdentifier:(id)arg1 oneTimeTask:(_Bool)arg2;

@end

