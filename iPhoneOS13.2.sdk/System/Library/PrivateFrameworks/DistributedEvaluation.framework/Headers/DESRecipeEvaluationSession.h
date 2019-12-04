//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DESRecipe, DESRecordSet, NSArray, NSData, NSDate, NSDictionary, NSError, NSString, NSURL;

@interface DESRecipeEvaluationSession : NSObject
{
    NSDate *_startDate;
    NSURL *_baseURL;
    NSString *_localeIdentifier;
    NSDate *_deadline;
    NSDate *_deferralDate;
    NSArray *_attachmentsToDelete;
    double _resumeTimestamp;
    Class _protocolClass;
    _Bool _wasResumedFromURL;
    DESRecipe *_recipe;
    DESRecordSet *_matchingRecordSet;
    long long _evaluationResult;
    NSDictionary *_JSONResult;
    NSData *_binaryResult;
    NSError *_error;
    NSString *_testingRecipePath;
    NSArray *_testingRecipeAttachments;
    id /* block */ _testingCompletionHandler;
}

+ (void)initialize;
@property(copy, nonatomic) id /* block */ testingCompletionHandler; // @synthesize testingCompletionHandler=_testingCompletionHandler;
@property(copy, nonatomic) NSArray *testingRecipeAttachments; // @synthesize testingRecipeAttachments=_testingRecipeAttachments;
@property(copy, nonatomic) NSString *testingRecipePath; // @synthesize testingRecipePath=_testingRecipePath;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) NSData *binaryResult; // @synthesize binaryResult=_binaryResult;
@property(readonly, copy, nonatomic) NSDictionary *JSONResult; // @synthesize JSONResult=_JSONResult;
@property(readonly, nonatomic) long long evaluationResult; // @synthesize evaluationResult=_evaluationResult;
@property(readonly, nonatomic) DESRecordSet *matchingRecordSet; // @synthesize matchingRecordSet=_matchingRecordSet;
@property(readonly, nonatomic) DESRecipe *recipe; // @synthesize recipe=_recipe;
- (void)_deleteDownloadedAttachments;
- (id)deferralURL;
- (id)deferWithDeadline:(id)arg1 error:(id *)arg2;
- (void)completeWithError:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)completeWithJSONResult:(id)arg1 binaryResult:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_postResultsToServerIfNeededWithCompletionHandler:(id /* block */)arg1;
- (void)downloadAttachmentsWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (id)_initWithResumptionURL:(id)arg1 recordSet:(id)arg2 protocolClass:(Class)arg3 error:(id *)arg4;
- (id)initWithResumptionURL:(id)arg1 error:(id *)arg2;
- (id)_initWithRecipe:(id)arg1 matchingRecordSet:(id)arg2 baseURL:(id)arg3 localeIdentifier:(id)arg4;
- (void)dealloc;

@end

