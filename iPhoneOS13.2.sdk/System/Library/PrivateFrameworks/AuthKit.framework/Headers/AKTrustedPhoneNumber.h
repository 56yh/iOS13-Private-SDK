//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface AKTrustedPhoneNumber : NSObject
{
    NSNumber *_identifier;
    NSString *_numberWithDialCode;
    NSString *_obfuscatedNumber;
    NSString *_pushMode;
}

@property(retain, nonatomic) NSString *pushMode; // @synthesize pushMode=_pushMode;
@property(retain, nonatomic) NSString *obfuscatedNumber; // @synthesize obfuscatedNumber=_obfuscatedNumber;
@property(retain, nonatomic) NSString *numberWithDialCode; // @synthesize numberWithDialCode=_numberWithDialCode;
@property(retain, nonatomic) NSNumber *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (id)initWithJSONDictionary:(id)arg1;

@end

