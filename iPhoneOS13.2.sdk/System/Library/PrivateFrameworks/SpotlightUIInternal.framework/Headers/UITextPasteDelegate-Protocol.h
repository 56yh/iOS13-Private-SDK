//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSAttributedString, UITextRange;
@protocol UITextPasteConfigurationSupporting, UITextPasteItem;

@protocol UITextPasteDelegate 

@optional
- (_Bool)textPasteConfigurationSupporting:(id <UITextPasteConfigurationSupporting>)arg1 shouldAnimatePasteOfAttributedString:(NSAttributedString *)arg2 toRange:(UITextRange *)arg3;
- (UITextRange *)textPasteConfigurationSupporting:(id <UITextPasteConfigurationSupporting>)arg1 performPasteOfAttributedString:(NSAttributedString *)arg2 toRange:(UITextRange *)arg3;
- (NSAttributedString *)textPasteConfigurationSupporting:(id <UITextPasteConfigurationSupporting>)arg1 combineItemAttributedStrings:(NSArray *)arg2 forRange:(UITextRange *)arg3;
- (void)textPasteConfigurationSupporting:(id <UITextPasteConfigurationSupporting>)arg1 transformPasteItem:(id <UITextPasteItem>)arg2;
@end

