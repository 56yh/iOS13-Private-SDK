//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCKRecordFieldSchema : NSObject
{
    _Bool _encrypted;
    _Bool _required;
    NSString *_name;
    Class _valueClass;
}

@property(nonatomic, getter=isRequired) _Bool required; // @synthesize required=_required;
@property(retain, nonatomic) Class valueClass; // @synthesize valueClass=_valueClass;
@property(readonly, nonatomic, getter=isEncrypted) _Bool encrypted; // @synthesize encrypted=_encrypted;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)isValidRecord:(id)arg1;
- (id)initWithName:(id)arg1 valueClass:(Class)arg2 required:(_Bool)arg3 encrypted:(_Bool)arg4;

@end

