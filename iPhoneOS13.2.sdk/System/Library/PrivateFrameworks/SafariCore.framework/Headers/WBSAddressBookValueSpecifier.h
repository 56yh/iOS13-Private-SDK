//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WBSAddressBookValueSpecifier : NSObject
{
    NSString *_property;
    NSString *_component;
    NSString *_label;
    NSString *_category;
    NSString *_parentProperty;
}

@property(readonly, nonatomic) NSString *parentProperty; // @synthesize parentProperty=_parentProperty;
@property(readonly, nonatomic) NSString *category; // @synthesize category=_category;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) NSString *component; // @synthesize component=_component;
@property(readonly, nonatomic) NSString *property; // @synthesize property=_property;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithProperty:(id)arg1 component:(id)arg2 label:(id)arg3 category:(id)arg4 parentProperty:(id)arg5;
- (id)initWithProperty:(id)arg1 component:(id)arg2 label:(id)arg3;

@end

