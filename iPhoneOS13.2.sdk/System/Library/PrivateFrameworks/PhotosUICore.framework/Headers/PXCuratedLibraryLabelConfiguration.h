//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSString;

@interface PXCuratedLibraryLabelConfiguration : NSObject <NSCopying>
{
    NSString *_text;
    long long _textAlignment;
}

@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

