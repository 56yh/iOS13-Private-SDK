//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PrototypeTools/PTRowAction.h>

@interface PTUIPresentViewControllerRowAction : PTRowAction
{
    id /* block */ _viewControllerCreator;
}

+ (id)actionWithViewControllerCreator:(id /* block */)arg1;
@property(readonly, nonatomic) id /* block */ viewControllerCreator; // @synthesize viewControllerCreator=_viewControllerCreator;
- (id /* block */)defaultHandler;
- (_Bool)deselectsRowOnSuccess;

@end

