"Run using : pytest test_registration.py "

import pytest
from registration import RegistrationService, InvalidEmailError, UnderageError

@pytest.fixture
def service():
    return RegistrationService()

def test_successful_registration(service):
    result = service.register_user("player1@server.com", 20)
    assert result is True

def test_invalid_email_format(service):
    with pytest.raises(InvalidEmailError):
         service.register_user("player1server.com", 20)

def test_underage_registration(service):
    with pytest.raises(UnderageError):
         service.register_user("player1@server.com", 16)
         
def test_invariant_assertion_failure(service):
    with pytest.raises(AssertionError):
        service.register_user("   ", 20)



