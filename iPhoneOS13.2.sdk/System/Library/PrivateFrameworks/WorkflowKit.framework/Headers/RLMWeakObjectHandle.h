//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class RLMObjectBase;

@interface RLMWeakObjectHandle : NSObject <NSCopying>
{
    struct BasicRow<realm::Table> _row;
    struct RLMClassInfo *_info;
    Class _objectClass;
}

- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) RLMObjectBase *object;
- (id)initWithObject:(id)arg1;

@end

