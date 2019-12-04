//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TextInputCore/TILanguageModelOfflineLearningTask.h>

@class NSCharacterSet, NSSet;
@protocol TILinguisticDataSource;

@interface TILanguageModelOfflineLearningTaskMail : TILanguageModelOfflineLearningTask
{
    NSCharacterSet *_linePaddingCharacters;
    NSSet *_forwardedMessageSeparators;
    id <TILinguisticDataSource> _dataSource;
}

+ (id)dataSourceForTask;
- (id)dataSource;
- (id)forwardedMessageSeparators;
- (id)linePaddingCharacters;
- (id)initWithClientIdentifier:(id)arg1 oneTimeTask:(_Bool)arg2;

@end

