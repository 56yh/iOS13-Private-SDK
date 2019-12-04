//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSWPTextualAttachment.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSWPNumberAttachment : TSWPTextualAttachment
{
    NSString *_stringValue;
    NSString *_numberFormat;
}

+ (Class)classForUnarchiver:(id)arg1;
@property(copy, nonatomic) NSString *numberFormat; // @synthesize numberFormat=_numberFormat;
@property(copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (void)performTemplateLocalization:(id)arg1;
- (id)stringWithNumber:(unsigned long long)arg1;
- (id)stringEquivalentWithLayoutParent:(id)arg1;
- (id)stringEquivalent;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1;

@end

