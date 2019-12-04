//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SUPurchaseManager;

@interface SUPurchaseBatch : NSObject
{
    NSArray *_continuations;
    NSArray *_errors;
    NSArray *_items;
    NSArray *_offers;
    SUPurchaseManager *_purchaseManager;
    _Bool _shouldSuspendWhenFinished;
    NSArray *_validPurchases;
}

@property(retain, nonatomic) NSArray *validPurchases; // @synthesize validPurchases=_validPurchases;
@property(nonatomic) __weak SUPurchaseManager *purchaseManager; // @synthesize purchaseManager=_purchaseManager;
@property(readonly, nonatomic) NSArray *offers; // @synthesize offers=_offers;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSArray *errors; // @synthesize errors=_errors;
@property(retain, nonatomic) NSArray *continuations; // @synthesize continuations=_continuations;
- (void)_validateItems;
- (id)_copyValidPurchasesForItems:(id)arg1;
- (id)_copyUniqueErrorsFromErrors:(id)arg1;
- (id)_copyModifiedErrorsFromDictionary:(struct __CFDictionary *)arg1;
- (id)mergedErrorForError:(id)arg1 withCount:(long long)arg2;
- (id)everythingFailedErrorForError:(id)arg1;
- (CDUnknownFunctionPointerType)errorEqualCallback;
- (id)copyFilteredItemsFromItems:(id)arg1;
- (id)copyContinuationsForPurchases:(id)arg1;
- (void)setPurchasesAndContinuationsFromPurchases:(id)arg1;
- (void)setDocumentTargetIdentifier:(id)arg1;
- (void)dealloc;
- (id)initWithItems:(id)arg1 offers:(id)arg2;
- (id)initWithItems:(id)arg1;

@end

