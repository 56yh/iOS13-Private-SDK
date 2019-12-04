//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class CKRecord, FCCKPrivateDatabase, FCPersonalizationTreatment, NSArray, NSError, NTPBPersonalizationProfile;

@interface FCModifyPersonalizationOperation : FCOperation
{
    FCCKPrivateDatabase *_database;
    NSArray *_changeGroups;
    FCPersonalizationTreatment *_treatment;
    CKRecord *_remoteRecord;
    id /* block */ _saveCompletionHandler;
    NTPBPersonalizationProfile *_savedProfile;
    CKRecord *_savedRecord;
    NSError *_resultError;
}

+ (void)pruneAggregates:(id)arg1;
+ (void)applyDeltas:(id)arg1 toProfile:(id)arg2 treatment:(id)arg3 prune:(_Bool)arg4;
+ (void)applyChangeGroups:(id)arg1 toProfile:(id)arg2 treatment:(id)arg3 prune:(_Bool)arg4;
+ (id)personalizationProfileFromRecord:(id)arg1;
@property(retain, nonatomic) NSError *resultError; // @synthesize resultError=_resultError;
@property(retain, nonatomic) CKRecord *savedRecord; // @synthesize savedRecord=_savedRecord;
@property(retain, nonatomic) NTPBPersonalizationProfile *savedProfile; // @synthesize savedProfile=_savedProfile;
@property(copy, nonatomic) id /* block */ saveCompletionHandler; // @synthesize saveCompletionHandler=_saveCompletionHandler;
@property(retain, nonatomic) CKRecord *remoteRecord; // @synthesize remoteRecord=_remoteRecord;
@property(retain, nonatomic) FCPersonalizationTreatment *treatment; // @synthesize treatment=_treatment;
@property(retain, nonatomic) NSArray *changeGroups; // @synthesize changeGroups=_changeGroups;
@property(retain, nonatomic) FCCKPrivateDatabase *database; // @synthesize database=_database;
- (void)resetForRetry;
- (_Bool)canRetryWithError:(id)arg1 retryAfter:(id *)arg2;
- (unsigned long long)maxRetries;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;

@end

