//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIMenuElement.h>

@class NSArray, NSString;

@interface UIMenu : UIMenuElement
{
    NSString *_identifier;
    unsigned long long _options;
    NSArray *_children;
}

+ (_Bool)supportsSecureCoding;
+ (id)menuWithTitle:(id)arg1 image:(id)arg2 identifier:(id)arg3 options:(unsigned long long)arg4 children:(id)arg5;
+ (id)menuWithTitle:(id)arg1 children:(id)arg2;
@property(readonly, nonatomic) NSArray *children; // @synthesize children=_children;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)_immutableCopy;
- (id)_copyWithOverrideChildren:(id)arg1;
- (_Bool)_acceptBoolMenuVisit:(id /* block */)arg1 leafVisit:(id /* block */)arg2;
- (void)_acceptMenuVisit:(id /* block */)arg1 leafVisit:(id /* block */)arg2;
- (_Bool)_acceptBoolMenuVisit:(id /* block */)arg1 commandVisit:(id /* block */)arg2 actionVisit:(id /* block */)arg3;
- (void)_acceptMenuVisit:(id /* block */)arg1 commandVisit:(id /* block */)arg2 actionVisit:(id /* block */)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)menuByReplacingChildren:(id)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2 identifier:(id)arg3 options:(unsigned long long)arg4 children:(id)arg5;
- (id)_spiRepresentation;

@end
