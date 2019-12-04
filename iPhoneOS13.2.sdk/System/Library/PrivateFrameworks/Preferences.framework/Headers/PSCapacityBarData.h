//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSArray;

@interface PSCapacityBarData : NSObject <NSCopying>
{
    NSArray *_orderedCategories;
    NSArray *_adjustedCategories;
    _Bool _hideTinyCategories;
    int _sortStyle;
    long long _categoryLimit;
    long long _capacity;
    long long _bytesUsed;
    NSArray *_categories;
}

@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property long long bytesUsed; // @synthesize bytesUsed=_bytesUsed;
@property long long capacity; // @synthesize capacity=_capacity;
@property int sortStyle; // @synthesize sortStyle=_sortStyle;
@property _Bool hideTinyCategories; // @synthesize hideTinyCategories=_hideTinyCategories;
@property long long categoryLimit; // @synthesize categoryLimit=_categoryLimit;
@property(readonly) NSArray *adjustedCategories;
@property(readonly) NSArray *orderedCategories;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

