//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <USDKit/USKIterator-Protocol.h>

@interface USKNodeSubtreeIterator : NSObject <USKIterator>
{
    struct UsdPrimRange _range;
    struct iterator _it;
}

- (id).cxx_construct;
- (id)nextObject;
- (id)initWithPrim:(const struct UsdPrim *)arg1;
- (id)initWithScene:(const TfWeakPtr_db1cbf17 *)arg1;
- (id)initWithSubtreeRange:(const struct UsdPrimRange *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

