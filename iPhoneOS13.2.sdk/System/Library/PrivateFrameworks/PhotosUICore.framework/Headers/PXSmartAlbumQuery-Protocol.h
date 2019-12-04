//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSString, PXLabeledValue, PXSmartAlbumCondition;
@protocol PXSmartAlbumQueryDelegate;

@protocol PXSmartAlbumQuery 
@property(nonatomic) __weak id <PXSmartAlbumQueryDelegate> delegate;
@property(readonly, nonatomic) NSString *statusString;
@property(readonly, nonatomic) _Bool canPersistChanges;
@property(retain, nonatomic) NSArray *conditions;
@property(retain, nonatomic) PXLabeledValue *conjunctionValue;
@property(readonly, nonatomic) NSArray *conjunctionValues;
@property(retain, nonatomic) NSString *title;
- (void)persistChangesWithCompletion:(void (^)(id, NSError *))arg1;
- (void)removeCondition:(PXSmartAlbumCondition *)arg1;
- (PXSmartAlbumCondition *)replaceCondition:(PXSmartAlbumCondition *)arg1 withConditionOfType:(long long)arg2;
- (PXSmartAlbumCondition *)addNewConditionAfterCondition:(PXSmartAlbumCondition *)arg1;
@end

