//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PLSingleQuery, PXLabeledValue;
@protocol PXSmartAlbumConditionDelegate, PXSmartAlbumEditingContext;

@interface PXSmartAlbumCondition : NSObject
{
    NSArray *_comparatorValues;
    long long _conditionType;
    id <PXSmartAlbumEditingContext> _editingContext;
    PLSingleQuery *_singleQuery;
    id <PXSmartAlbumConditionDelegate> _delegate;
}

+ (id)defaultSingleQueryForEditingContext:(id)arg1;
+ (id)conditionsForQuery:(id)arg1 editingContext:(id)arg2 error:(id *)arg3;
+ (id)_conditionWithSingleQuery:(id)arg1 editingContext:(id)arg2;
+ (id)conditionWithConditionType:(long long)arg1 editingContext:(id)arg2;
@property(nonatomic) __weak id <PXSmartAlbumConditionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PLSingleQuery *singleQuery; // @synthesize singleQuery=_singleQuery;
@property(readonly, nonatomic) id <PXSmartAlbumEditingContext> editingContext; // @synthesize editingContext=_editingContext;
@property(readonly, nonatomic) long long conditionType; // @synthesize conditionType=_conditionType;
- (int)_comparatorType;
- (long long)comparatorMode;
@property(readonly, nonatomic) long long comparatorParameterType;
@property(retain, nonatomic) PXLabeledValue *comparatorValue;
@property(readonly, nonatomic) NSArray *comparatorValues;
- (id)_initWithConditionType:(long long)arg1 singleQuery:(id)arg2 editingContext:(id)arg3;
- (id)init;

@end

