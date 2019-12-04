//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OADOle : NSObject
{
    _Bool mIconic;
    NSString *mCLSID;
    NSString *mAnsiUserType;
    NSString *mAnsiClipboardFormatName;
    unsigned int mWinClipboardFormat;
    NSString *mMacClipboardFormat;
    NSString *mAnsiProgID;
    NSString *mUnicodeUserType;
    NSString *mUnicodeClipboardFormatName;
    NSString *mUnicodeProgID;
    id mObject;
}

+ (_Bool)isCLSIDSupported:(id)arg1;
+ (_Bool)isProgIDMathType:(id)arg1;
+ (_Bool)isProgIDChart:(id)arg1;
- (id)description;
- (void)setObject:(id)arg1;
- (id)object;
- (void)setUnicodeProgID:(id)arg1;
- (id)unicodeProgID;
- (void)setUnicodeClipboardFormatName:(id)arg1;
- (id)unicodeClipboardFormatName;
- (void)setUnicodeUserType:(id)arg1;
- (id)unicodeUserType;
- (void)setAnsiProgID:(id)arg1;
- (id)ansiProgID;
- (void)setMacClipboardFormat:(id)arg1;
- (id)macClipboardFormat;
- (void)setWinClipboardFormat:(unsigned int)arg1;
- (unsigned int)winClipboardFormat;
- (void)setAnsiClipboardFormatName:(id)arg1;
- (id)ansiClipboardFormatName;
- (void)setAnsiUserType:(id)arg1;
- (id)ansiUserType;
- (void)setCLSID:(id)arg1;
- (id)CLSID;
- (void)setIconic:(_Bool)arg1;
- (_Bool)iconic;
- (id)init;

@end

