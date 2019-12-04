//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TextInput/TITypologyRecord.h>

@class NSString, TIKeyboardState;

@interface TITypologyRecordGroupMarker : TITypologyRecord
{
    TIKeyboardState *_keyboardState;
    NSString *_textChange;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *textChange; // @synthesize textChange=_textChange;
@property(retain, nonatomic) TIKeyboardState *keyboardState; // @synthesize keyboardState=_keyboardState;
- (void)replaceDocumentState:(id)arg1;
- (id)shortDescription;
- (void)removeContextFromKeyboardState;
- (id)currentKeyboardState;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

