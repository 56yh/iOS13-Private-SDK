//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface CKContextCountedItem : NSObject <NSSecureCoding>
{
    id _item;
    NSUInteger _count;
}

+ (id)item:(id)arg1 withCount:(NSUInteger)arg2;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) NSUInteger count; // @synthesize count=_count;
@property(retain, nonatomic) id item; // @synthesize item=_item;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

