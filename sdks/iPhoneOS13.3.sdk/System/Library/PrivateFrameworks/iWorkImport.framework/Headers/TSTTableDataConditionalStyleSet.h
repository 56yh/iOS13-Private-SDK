//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSTTableDataObject.h>

@class TSTConditionalStyleSet;

__attribute__((visibility("hidden")))
@interface TSTTableDataConditionalStyleSet : TSTTableDataObject
{
    TSTConditionalStyleSet *_conditionalStyleSet;
}

+ (id)objectWithConditionalStyleSet:(id)arg1 refCount:(unsigned int)arg2;
@property(retain, nonatomic) TSTConditionalStyleSet *conditionalStyleSet; // @synthesize conditionalStyleSet=_conditionalStyleSet;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)estimateByteSize;
- (NSUInteger)hash;
- (void)encodeToArchive:(struct TableDataList_ListEntry )arg1 key:(unsigned int)arg2 archiver:(id)arg3;
- (void)loadFromArchive:(const struct TableDataList_ListEntry )arg1 unarchiver:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (id)initObjectWithConditionalStyleSet:(id)arg1 refCount:(unsigned int)arg2;

@end

