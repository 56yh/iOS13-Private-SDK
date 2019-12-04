//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WFRecordProperty : NSObject
{
    _Bool _readOnly;
    _Bool _nonAtomic;
    _Bool _dynamic;
    NSString *_name;
    NSString *_getter;
    NSString *_setter;
}

@property(readonly, nonatomic) NSString *setter; // @synthesize setter=_setter;
@property(readonly, nonatomic) NSString *getter; // @synthesize getter=_getter;
@property(readonly, nonatomic, getter=isDynamic) _Bool dynamic; // @synthesize dynamic=_dynamic;
@property(readonly, nonatomic, getter=isNonAtomic) _Bool nonAtomic; // @synthesize nonAtomic=_nonAtomic;
@property(readonly, nonatomic, getter=isReadOnly) _Bool readOnly; // @synthesize readOnly=_readOnly;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithName:(id)arg1 property:(struct objc_property *)arg2;

@end

