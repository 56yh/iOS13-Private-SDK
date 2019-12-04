//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString, PXSearchTokenRepresentedObject, UIImage, UISearchToken;

@interface PXSearchToken : NSObject
{
    struct UISearchToken *_searchObject;
    PXSearchTokenRepresentedObject *_representedObject;
    struct UIImage *_image;
    NSString *_text;
    NSAttributedString *_attributedText;
}

@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) PXSearchTokenRepresentedObject *representedObject; // @synthesize representedObject=_representedObject;
@property(retain, nonatomic) UISearchToken *searchObject; // @synthesize searchObject=_searchObject;
- (id)textValue;
- (id)initWithText:(id)arg1 searchObject:(struct UISearchToken *)arg2 representedObject:(id)arg3;
- (id)initWithAttributedText:(id)arg1 searchObject:(struct UISearchToken *)arg2 representedObject:(id)arg3;
- (id)initWithText:(id)arg1 image:(struct UIImage *)arg2 representedObject:(id)arg3;

@end
