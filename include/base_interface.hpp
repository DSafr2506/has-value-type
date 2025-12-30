#include <vector>
#include <type_traits>

// --- РЕАЛИЗАЦИЯ ЗАДАЧИ ---

// 1. Объявляем общий шаблон.
template <typename T, typename = std::void_t<>>
struct HasValueType_Impl : std::false_type {};

// 2. Частичная специализация, которая выбирается, если подстановка T::value_type успешна.
template <typename T>
struct HasValueType_Impl<T, /* TODO */> : /* TODO: */ {};

// Основной публичный trait
template <typename T>
using HasValueType = HasValueType_Impl<T>;
