//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath;

__attribute__((visibility("hidden")))
@interface _MapUpdate : NSObject
{
    _Bool _isSectionUpdate;
    _Bool _isInsert;
    _Bool _isDelete;
    _Bool _isMove;
    NSIndexPath *_indexPath;
    NSIndexPath *_moveFromIndexPath;
    NSIndexPath *_moveToIndexPath;
    long long _index;
    long long _section;
    long long _moveFromSection;
    long long _moveToSection;
    struct _NSRange _insertRange;
    struct _NSRange _deleteRange;
    struct _NSRange _moveFromRange;
    struct _NSRange _moveToRange;
}

+ (id)itemMoveFromIndexIndexPath:(id)arg1 toIndexPath:(id)arg2 fromIndex:(long long)arg3 toIndex:(long long)arg4;
+ (id)itemMoveSection:(long long)arg1 toSection:(long long)arg2 fromRange:(struct _NSRange)arg3 toRange:(struct _NSRange)arg4;
+ (id)itemDeleteItemAtIndexPath:(id)arg1 index:(long long)arg2;
+ (id)itemDeleteSection:(long long)arg1 deleteRange:(struct _NSRange)arg2;
+ (id)itemInsertItemAtIndexPath:(id)arg1 index:(long long)arg2;
+ (id)itemInsertSection:(long long)arg1 insertRange:(struct _NSRange)arg2;
@property(nonatomic) struct _NSRange moveToRange; // @synthesize moveToRange=_moveToRange;
@property(nonatomic) struct _NSRange moveFromRange; // @synthesize moveFromRange=_moveFromRange;
@property(nonatomic) long long moveToSection; // @synthesize moveToSection=_moveToSection;
@property(nonatomic) long long moveFromSection; // @synthesize moveFromSection=_moveFromSection;
@property(nonatomic) struct _NSRange deleteRange; // @synthesize deleteRange=_deleteRange;
@property(nonatomic) struct _NSRange insertRange; // @synthesize insertRange=_insertRange;
@property(nonatomic) long long section; // @synthesize section=_section;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSIndexPath *moveToIndexPath; // @synthesize moveToIndexPath=_moveToIndexPath;
@property(retain, nonatomic) NSIndexPath *moveFromIndexPath; // @synthesize moveFromIndexPath=_moveFromIndexPath;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) _Bool isMove; // @synthesize isMove=_isMove;
@property(nonatomic) _Bool isDelete; // @synthesize isDelete=_isDelete;
@property(nonatomic) _Bool isInsert; // @synthesize isInsert=_isInsert;
@property(nonatomic) _Bool isSectionUpdate; // @synthesize isSectionUpdate=_isSectionUpdate;
- (id)reverseUpdateItem;
- (id)description;

@end

