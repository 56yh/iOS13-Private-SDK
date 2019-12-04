//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>


#import <KeyboardServices/_KSTIUserDictionaryEntry-Protocol.h>

@class NSDate, NSString;

@interface _KSTIUserDictionaryEntryValue : NSObject <NSSecureCoding, _KSTIUserDictionaryEntry>
{
    NSString *_phrase;
    NSString *_shortcut;
    NSDate *_timestamp;
}

+ (id)valueWithEntry:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *shortcut; // @synthesize shortcut=_shortcut;
@property(copy, nonatomic) NSString *phrase; // @synthesize phrase=_phrase;
- (id)shortcutForSorting;
- (_Bool)matchesEntry:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

