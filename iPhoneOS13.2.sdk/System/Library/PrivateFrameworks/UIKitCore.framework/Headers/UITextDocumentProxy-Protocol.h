//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIKeyInput-Protocol.h>

@class NSString, NSUUID, UITextInputMode;

@protocol UITextDocumentProxy <UIKeyInput>
@property(readonly, copy, nonatomic) NSUUID *documentIdentifier;
@property(readonly, nonatomic) UITextInputMode *documentInputMode;
@property(readonly, nonatomic) NSString *selectedText;
@property(readonly, nonatomic) NSString *documentContextAfterInput;
@property(readonly, nonatomic) NSString *documentContextBeforeInput;
- (void)unmarkText;
- (void)setMarkedText:(NSString *)arg1 selectedRange:(struct _NSRange)arg2;
- (void)adjustTextPositionByCharacterOffset:(long long)arg1;
@end

