//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKCSSDeclaration.h>

@interface IKCSSDeclarationEdgeInsets : IKCSSDeclaration
{
    _Bool _insetsFound;
    unsigned long long _edgeFlag;
    struct UIEdgeInsets _insets;
}

@property _Bool insetsFound; // @synthesize insetsFound=_insetsFound;
@property unsigned long long edgeFlag; // @synthesize edgeFlag=_edgeFlag;
@property struct UIEdgeInsets insets; // @synthesize insets=_insets;
- (id)description;
- (id)stringValue;
- (id)initWithParseDeclaration:(id)arg1 info:(id)arg2;

@end

