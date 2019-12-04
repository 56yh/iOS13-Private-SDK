//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKPassPersonalizationCellContext : NSObject
{
    _Bool _bindTextToStringRepresentation;
    double _minimumTextLabelWidth;
    long long _keyboardType;
    long long _autocapitalizationType;
    NSString *_title;
    id /* block */ _stringRepresentationBlock;
    id /* block */ _contactUpdateBlock;
}

@property(copy, nonatomic) id /* block */ contactUpdateBlock; // @synthesize contactUpdateBlock=_contactUpdateBlock;
@property(copy, nonatomic) id /* block */ stringRepresentationBlock; // @synthesize stringRepresentationBlock=_stringRepresentationBlock;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool bindTextToStringRepresentation; // @synthesize bindTextToStringRepresentation=_bindTextToStringRepresentation;
@property(nonatomic) long long autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(nonatomic) double minimumTextLabelWidth; // @synthesize minimumTextLabelWidth=_minimumTextLabelWidth;

@end

