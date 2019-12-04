//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCPersonalizationTreatment, NSArray, NSDictionary;
@protocol FCReadonlyPersonalizationAggregateStore;

@interface NTPersonalizationFeatureCTRLookupOperation : FCOperation
{
    id <FCReadonlyPersonalizationAggregateStore> _aggregateStore;
    FCPersonalizationTreatment *_personalizationTreatment;
    NSArray *_lookupRequests;
    id /* block */ _lookupCompletion;
    NSDictionary *_result;
}

@property(copy, nonatomic) NSDictionary *result; // @synthesize result=_result;
@property(copy, nonatomic) id /* block */ lookupCompletion; // @synthesize lookupCompletion=_lookupCompletion;
@property(copy, nonatomic) NSArray *lookupRequests; // @synthesize lookupRequests=_lookupRequests;
@property(copy, nonatomic) FCPersonalizationTreatment *personalizationTreatment; // @synthesize personalizationTreatment=_personalizationTreatment;
@property(retain, nonatomic) id <FCReadonlyPersonalizationAggregateStore> aggregateStore; // @synthesize aggregateStore=_aggregateStore;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;
- (id)init;

@end

