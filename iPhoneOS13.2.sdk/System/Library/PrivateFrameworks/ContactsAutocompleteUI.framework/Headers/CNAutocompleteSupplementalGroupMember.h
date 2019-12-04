//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPersonNameComponents, NSString;

@interface CNAutocompleteSupplementalGroupMember : NSObject
{
    NSString *_address;
    long long _addressType;
    NSPersonNameComponents *_nameComponents;
    NSString *_name;
}

@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSPersonNameComponents *nameComponents; // @synthesize nameComponents=_nameComponents;
@property(readonly) long long addressType; // @synthesize addressType=_addressType;
@property(readonly, copy) NSString *address; // @synthesize address=_address;
- (id)initWithNameComponents:(id)arg1 address:(id)arg2 addressType:(long long)arg3;
- (id)initWithName:(id)arg1 address:(id)arg2 addressType:(long long)arg3;

@end
